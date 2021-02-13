#include <bits/stdc++.h>
using namespace std;
int main()
{
    char para[200], word[20];
    int i = 0, c = 0;

    cout << "\nEnter a paragraph: ";
    gets(para);

    cout << "\nEnter the word you want to search: ";
    gets(word);

    while (para[i] != '\0')
    {
        if (para[i] == word[c] && word[c] != '\0')
            c++;

        else
            c = 0;

        i++;
    }

    if (c == strlen(word))
        cout << "\nWord found" << endl;

    else
        cout << "\nWord not found" << endl;
}