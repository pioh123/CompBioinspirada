#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

void print_all_permutations(const string& s)
{
    string s1 = s;
    sort(s1.begin(), s1.end()); 
    do {
        cout << s1 << endl;
    } while (next_permutation(s1.begin(), s1.end()));
}

int main()
{
    print_all_permutations("AAB");
}