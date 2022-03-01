#include<iostream>
#include<algorithm> // For sorting
#include<string> // Special header file for strings
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//            CHAR ARRAY                         //                          STRINGS                    //
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 1. Need to know the size beforehand           //       1. No need to know the size beforehand        //
// 2. Larger size required for operations like   //       2. Performing operations like concatenation   //
//    concatenation and append                   //          and append is easier                       //
// 3. No terminating character is required       //       3. Should be terminated with a special        //
//                                               //          character '\0'                             //
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    // string str;
    // // WAYS TI DECLARE A STRING
    // cin >> str;  // 1
    // string str1(5, 'n');  // 2
    // string str2 = 'Learn'; // 3

    // cout << str << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    // All above methods will take string input in one word, for a sentence use the below method
    // string str3;
    // getline(cin, str3);

    // cout << str3 << endl;

    // Function of Strings

    // Joining to string (Appending 2 strings)
    // string s1 = "fam";
    // string s2 = "ily";

    // cout << s1 + s2 << endl; // Aliter for joining 2 strings

    // s1.append(s2);
    // cout << s1 << endl;

    // Accessing a particular character in a string
    // string s3 = "fam";

    // cout << s3[1] << endl;
    // clear function
    // string abc = " ljdf j dcwewek csdm";
    // abc.clear();
    // cout<<"Clear: " << abc << endl;

    // Comparing 2 strings

    // string s4 = "abc";
    // string s5 = "xyz";
    // cout << "Comaring s4 and s5: " << s5.compare(s4) << endl;

    // To check is string is empty or not
    // string s6 = "abcd";
    // s6.clear();
    // if (s6.empty())
    // {
    //     cout << "str is empty";
    // }
    
    // Erasing chars of a string
    string s8 = "nincompoop";
    s8.erase(3, 3);
    cout << s8 << endl;

    // Finding / searching in a string
    cout << s8.find("poop") << endl;

    // Insert function
    string s9 = " nincompoope";
    s9.insert(2, "lol");
    cout << s9 << endl;

    // Length of string
    cout << s9.size() << endl; 
    cout << s9.length() << endl;

    // Iterating over all chars in string
    for (int i = 0; i < s9.length(); i++)
    {
        cout << s9[i] << endl;
    }

    // Substring
    string s10 = s9.substr(6, 4);
    cout << s10 << endl;

    // string to integer conversion and using it as an integer

    string s11 = "786";
    int x = stoi(s11);
    cout << x + 2 << endl; // O/P: 788

    // Integer to string
    int y = 786;
    cout << to_string(y) + "2" << endl;  // O/P: 7862

    // Sorting a string

    string s12 = "dmasjcewvdcl";
    sort(s12.begin(), s12.end());
    cout << s12 << endl;


    return 0;
}