using System;
using System.Collections.Generic;

public class CVariableDFA
{
    private enum State
    {
        Start,
        Letter,
        Digit,
        Underscore,
        End
    }

    private Dictionary<State, Dictionary<char, State>> transitionTable;
    private State currentState;

    public CVariableDFA()
    {
        InitializeTransitionTable();
        Reset();
    }

    private void InitializeTransitionTable()
    {
        transitionTable = new Dictionary<State, Dictionary<char, State>>();

        // Transition table for each state
        transitionTable[State.Start] = new Dictionary<char, State>
        {
            { '_', State.Underscore },
            { char.ToLower('a'), State.Letter },
            { char.ToUpper('a'), State.Letter },
            { char.ToLower('b'), State.Letter },
            { char.ToUpper('b'), State.Letter },
        };

        transitionTable[State.Letter] = new Dictionary<char, State>
        {
            { '_', State.Letter },
            { char.ToLower('a'), State.Letter },
            { char.ToUpper('a'), State.Letter },
            { char.ToLower('b'), State.Letter },
            { char.ToUpper('b'), State.Letter },
            { '0', State.Digit },
            { '1', State.Digit },
            { '2', State.Digit },
            { '3', State.Digit },
            { '4', State.Digit },
            { '5', State.Digit },
            { '6', State.Digit },
            { '7', State.Digit },
            { '8', State.Digit },
            { '9', State.Digit }
        };

        transitionTable[State.Digit] = new Dictionary<char, State>
        {
            { '_', State.Digit },
            { char.ToLower('a'), State.Letter },
            { char.ToUpper('a'), State.Letter },
            { char.ToLower('b'), State.Letter },
            { char.ToUpper('b'), State.Letter },
            { '0', State.Digit },
            { '1', State.Digit },
            { '2', State.Digit },
            { '3', State.Digit },
            { '4', State.Digit },
            { '5', State.Digit },
            { '6', State.Digit },
            { '7', State.Digit },
            { '8', State.Digit },
            { '9', State.Digit }
        };

        transitionTable[State.Underscore] = new Dictionary<char, State>
        {
            { '_', State.Underscore },
            { char.ToLower('a'), State.Letter },
            { char.ToUpper('a'), State.Letter },
            { char.ToLower('b'), State.Letter },
            { char.ToUpper('b'), State.Letter }
        };

        transitionTable[State.End] = new Dictionary<char, State>();
    }

    public bool Accepts(string input)
    {
        foreach (char c in input)
        {
            if (!transitionTable[currentState].ContainsKey(c))
                return false;

            currentState = transitionTable[currentState][c];
        }
        
        return currentState == State.Letter || currentState == State.Digit || currentState == State.End;
    }

    public void Reset()
    {
        currentState = State.Start;
    }
}

class Program
{
    static void Main(string[] args)
    {
        CVariableDFA dfa = new CVariableDFA();
        string[] testCases = { "ab", "_aabb", "123ab", "ab123","ab_ab","ab12ab", "123" };

        foreach (string testCase in testCases)
        {
            dfa.Reset();
            bool accepted = dfa.Accepts(testCase);
            Console.WriteLine($"Input: {testCase}, Accepted: {accepted}");
        }
    }
}
