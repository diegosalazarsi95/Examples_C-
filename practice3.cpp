#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long search(long n, string s){
    long i;
    long cont = 0;
    for(i=0; i<n ;i++){
        if(s[i]=='a'){
            cont++;
        }
    }
    return cont;
}

long repeatedString(string s, long n) {
    long i;
    long number = 0;
    long length_s = s.size();
    number = n%length_s;
    number = search(length_s,s)*floor(n/length_s) + search(number,s);
    return number;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}