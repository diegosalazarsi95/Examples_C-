#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int i;
    int count = 0;
    int valley = 0;
    for(i=0;i<n;i++){
        if(s[i]=='D'){
            count--;
        }
        else if(s[i]=='U'){
            if(count == -1){
                valley++;
            }
            count++;
        }
        cout << count <<endl;
    }
    return valley;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << "Resultadp:" << result << "\n";

    fout.close();

    return 0;
}