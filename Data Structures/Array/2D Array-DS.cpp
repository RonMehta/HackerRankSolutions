#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the array2D function below.
 */
int array2D(vector<vector<int>> arr) {
    /*
     * Write your code here.
     */
    
    int r_size = arr.size();
    int sum = INT_MIN;
    int max=INT_MIN;
    for(int r = 0; r < r_size-2; r++){
        int c_size = arr[r].size();
        for(int c =0; c < c_size-2; c++){
            sum = arr[r][c] + arr[r][c+1] + arr[r][c+2] + arr[r+1][c+1] + arr[r+2][c] + arr[r+2][c+1] + arr[r+2][c+2];
            
            if(max<sum)
                max = sum;
        }
    }
    
    return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int arr_row_itr = 0; arr_row_itr < 6; arr_row_itr++) {
        arr[arr_row_itr].resize(6);

        for (int arr_column_itr = 0; arr_column_itr < 6; arr_column_itr++) {
            cin >> arr[arr_row_itr][arr_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = array2D(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
