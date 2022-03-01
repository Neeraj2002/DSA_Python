#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// Convert a random string in only capital letters or small case letters
// int main(){
//     // Convert into upper case letters
//     string str = "azxmcndeoq";
//     // Difference between letter capital letter and small case is -32
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] -= 32;
//         } 
//     }
//     cout << str << endl;

//     // Convert into lower case letters
//     string str1 = "AZXASCSMOOE";
//     // Difference between small case and letter capital letter is 32
//     for (int i = 0; i < str1.size(); i++)
//     {
//         if (str1[i] >= 'A' && str1[i] <= 'Z')
//         {
//             str1[i] += 32;
//         } 
//     }
//     cout << str1 << endl;

//     // Inbuild function in strings to convert in upper/lower case
//     string s = "cjmlaDecHYEcn";
//     //        from    | to    |  from where to begin transforming | what transformation is needed
//     transform(s.begin(), s.end(), s.begin(), ::toupper);
//     cout << s <<endl;

//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     cout << s << endl;
//     return 0;
// }

// Making the biggest possible number from the numeric string given
// int main(){
//     string s = "28482109";
//     sort(s.begin(), s.end(), greater<int>());

//     cout << s << endl;

//     return 0;
// }

// O/P the character which occurs the maximum times in a string
int main(){
    string s = "abcacbadefffffffffff";
    int frequency[26];
    for (int i = 0; i < 26; i++)
        frequency[i] = 26;

    for (int i = 0; i < s.size(); i++)
    {
        frequency[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > maxF)
        {
            maxF = frequency[i];
            ans = i + 'a';
        }
        
    }
    cout << maxF << " " << ans << endl;
    

    
    return 0;
}