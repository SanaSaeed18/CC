using System;
using System.Collections.Generic;

namespace Lab7_Task_1
{
    internal class Program
    {
        // Non-terminals
        static HashSet<char> nonTerminals = new HashSet<char> { 'E', 'T', 'F', 'N' };

        // Terminals
        static HashSet<char> terminals = new HashSet<char> { '+', '-', '*', '/', '(', ')', 'n' };

        // Follow sets
        static Dictionary<char, HashSet<char>> followSets = new Dictionary<char, HashSet<char>>();

        // Grammar rules
        static Dictionary<char, List<string>> grammarRules = new Dictionary<char, List<string>>
        {
            {'E', new List<string>{"E+T", "E-T", "T"}},
            {'T', new List<string>{"T*F", "T/F", "F"}},
            {'F', new List<string>{"(E)", "N"}},
            {'N', new List<string>{"n"}}
        };

        static void Main(string[] args)
        {
            ComputeFollowSets();
            DisplayFollowSets();
        }

        static void ComputeFollowSets()
        {
            
            foreach (char nonTerminal in nonTerminals)
            {
                followSets.Add(nonTerminal, new HashSet<char>());
            }

            
            followSets['E'].Add('$');

            bool changed = true;
            while (changed)
            {
                changed = false;

                foreach (var entry in grammarRules)
                {
                    char nonTerminal = entry.Key;
                    List<string> rules = entry.Value;

                    foreach (string rule in rules)
                    {
                        for (int i = 0; i < rule.Length; i++)
                        {
                            char symbol = rule[i];

                            if (nonTerminals.Contains(symbol))
                            {
                                if (i < rule.Length - 1)
                                {
                                    
                                    char nextSymbol = rule[i + 1];
                                    if (terminals.Contains(nextSymbol))
                                    {
                                        
                                        if (!followSets[symbol].Contains(nextSymbol))
                                        {
                                            followSets[symbol].Add(nextSymbol);
                                            changed = true;
                                        }
                                    }
                                    else
                                    {
                                        
                                        HashSet<char> firstOfNext = First(nextSymbol.ToString());
                                        firstOfNext.Remove('ε');
                                        if (firstOfNext.Count > 0)
                                        {
                                            int countBefore = followSets[symbol].Count;
                                            followSets[symbol].UnionWith(firstOfNext);
                                            if (countBefore != followSets[symbol].Count)
                                            {
                                                changed = true;
                                            }
                                        }

                                        
                                        if (firstOfNext.Contains('ε'))
                                        {
                                            int countBefore = followSets[symbol].Count;
                                            followSets[symbol].UnionWith(followSets[nonTerminal]);
                                            if (countBefore != followSets[symbol].Count)
                                            {
                                                changed = true;
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    
                                    int countBefore = followSets[symbol].Count;
                                    followSets[symbol].UnionWith(followSets[nonTerminal]);
                                    if (countBefore != followSets[symbol].Count)
                                    {
                                        changed = true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        static HashSet<char> First(string symbol)
        {
            HashSet<char> firstSet = new HashSet<char>();

            if (terminals.Contains(symbol[0]) || symbol[0] == '(')
            {
                firstSet.Add(symbol[0]);
            }
            else
            {
                foreach (var rule in grammarRules[symbol[0]])
                {
                    HashSet<char> firstOfRule = First(rule);
                    firstSet.UnionWith(firstOfRule);
                }
            }

            return firstSet;
        }

        static void DisplayFollowSets()
        {
            Console.WriteLine("Follow Sets:");

            foreach (var entry in followSets)
            {
                Console.Write($"Follow({entry.Key}) = {{ ");
                foreach (char terminal in entry.Value)
                {
                    Console.Write($"{terminal}, ");
                }
                Console.WriteLine("}");
            }
        }
    }
}
