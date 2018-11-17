#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int n = arr.size();
    int mayor = 0;
    int temp = 0;
    for(int i=1; i<n-1; i++){
        for(int j=1; j<n-1; j++){
            temp= arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
            cout << "temp: " << temp << endl;
            if(temp>mayor){
                mayor = temp;
            }
            else if(i==1 && j==1){
                mayor = temp;
            }
        }
    }
    return mayor;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    cout << result << "\n";

    fout.close();

    return 0;
}