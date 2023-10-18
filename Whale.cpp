/*
whales only speak in vowels, create a human to whale translator
*/

#include <iostream>
#include <vector> 
#include <string>

int main() {

    std::string input = "turpentine and turtles";
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    for (int i = 0; i < input.size(); i++) {
        for (int a = 0; a < vowels.size(); a++) {
            if(input[i] == vowels[a]) {
                result.push_back(input[i]);
                if (input[i] == 'u' || input[i]== 'e'){ //whales double 'e' and 'u' in their speech...
                    result.push_back(input[i]);
                }
            }
        }
    }

//printing the vowels
    for (int f = 0; f < result.size(); f++) {
        std::cout << result[f];
    }


}//end of main()