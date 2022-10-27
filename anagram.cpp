#include<iostream>
using namespace std;




bool checkAnagram(string a, string b)
{
    int freq[26]={0}; 
//this is for increment purpose of this , or checking the term form initial state and then going to the last step.
    for(int i=0; i<a.length(); i++)
    {
        char ch = a[i];
        int index = ch-'a';
        freq[index]++;
    } 

    //this is for decrement purpose of checking the char from last to first.
    for(int i=0; i<b.length(); i++)
    {
        char ch = b[i];
        int index = ch-'a';
        freq[index]--;
    } 

    bool flag = true;
    for(int i=0; i<26; i++)
    {
        if(freq[i] !=0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string a = "noon";
    string b = "noon";
    cout<<"this is anagram"<<checkAnagram;
    return 0;
}