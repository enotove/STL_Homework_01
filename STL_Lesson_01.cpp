#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<char, int> counter_letter;
    std::multimap<int, char> counter_sort;
    std::string in_word = "Hello World!";
    std::cout << "IN: " << in_word << std::endl;


    for (const auto& it : in_word)
    {
        if (counter_letter.count(it) == 0)
        {
            counter_letter[it] = 1;

        }
        else
        {
            counter_letter[it] += 1;
        }
    }
    for (const auto& it : counter_letter)
    {
        counter_sort.insert({ it.second, it.first});
    }
    
    std::cout << "OUT: " << std::endl;
    
    for (auto iter{ counter_sort.rbegin() }; iter != counter_sort.rend(); iter++)
    {
        std::cout << iter->second << "\t" << iter->first << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
