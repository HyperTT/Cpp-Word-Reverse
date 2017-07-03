#include <iostream>
#include <string>
using namespace std;

void word_reversing(string to_be_reversed)
{
    //for (int inner = to_be_reversed.length(); inner < 0; inner--)
    for (int inner = 0; inner < to_be_reversed.length(); inner++)
    {
        cout << to_be_reversed[to_be_reversed.length() - inner - 1];
    }
    cout<<endl;
}

int main ()
{
    string word;
    cout << "Enter some word\n";
    cin >> word;
    word_reversing(word);
    return 0;
}
