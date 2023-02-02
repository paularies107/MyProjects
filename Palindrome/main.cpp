#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string x)
{
    int i=0, length;
    int flag=0;
    string reverse;
    //Get String Length
    do
    {
        i++;
        length = i;
    }
    while(x[i] != '\0');
    //Reverse Order
    for (int count = 0; count <= i; count++)
    {
        reverse[count] = x[length - 1];
        length--;
    }
    //Compare characters
    for (int k=0; k < i ; k++)
    {
        if (reverse[k] == x[k])
        {
            flag++;
        }
    }
    //Check if Palindrome
    if (flag == i)
        return true;
    else
        return false;
}

int main()
{
    string n;
    cout << "Palindrome: ";
    cin >> n;

    if(isPalindrome(n))
    {
        cout <<"\n" << n <<" is a palindrome";
    }
    else
    {
        cout <<"\n" << n <<" is NOT a palindrome";
    }
    return 0;
}
