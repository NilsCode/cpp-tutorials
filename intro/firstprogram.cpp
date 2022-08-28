#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

int main(){
    // std::cout << "Hello World";
    // int num = 0;
    // int num1 = 0;

    // std::cout << "Enter 2 whole numbers : ";
    // std::cin >> num >> num1;
    // std::cout << "The two numbers are : " << num << num1 << std::endl ;
    // std::cout << "Size of num is " << sizeof(num)<< std::endl;

    //Array Excercise
    // int my_arr[5] {0#include <algorithm>0,0,0,0};
    // std::cout << "The first number of the array is : " << my_arr[0]<< std::endl;
    // std::cout << 50

    // Vector Excercise
    // std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    // std::cout << "The vowel at position 0 is : " << vowels.at(4) << std::endl;

    // std::vector <std::vector <int>> my_vec(2, std::vector<int>(2,4));
    // std::cout << "The 1,1 element of my_vec is : " << my_vec[0][0] << std::endl;

    //int name[20];

    //std::cout << name << std::endl;

    std::string s1;
    std::cout << "Enter a string ";
    std::getline(std::cin, s1);
    //std::cout << s1 << std::endl;
    int n = s1.length();
    int maxlen = 2*n -1;
    std::string final_str;
    for (int i = 0 ; i < n ; i++){
        std::string tr = s1.substr(0, i+1);
        std::string temp(tr);
        std::string adder = temp.substr(0, temp.length() - 1);
        if(adder.length() > 0){
            std::reverse(adder.begin(), adder.end());
            //std::cout << "Printing adder length " << adder.length() << std::endl;
            //std::cout << tr + adder << std::endl;
            final_str = tr + adder;
        }
        else{
            //std::cout << "Printing adder length "  << adder.length() << adder << std::endl;
            //std::cout << tr << std::endl;
            final_str = tr;
        }
        int half_len = (maxlen - final_str.length())/2;
        std::string empty_str (half_len, ' ');
        std::cout << empty_str + final_str + empty_str << std:: endl;
    }
    return 0;
}