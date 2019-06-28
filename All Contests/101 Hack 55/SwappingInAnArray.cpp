

//
//Safisko has an array  with  positive integer elements.Safisko likes order, so he wants his array to be sorted. (A sorted array is an array that contains non - decreasing elements in increasing index order.) He decides to swap two elements in the array to make his array sorted. (A swap is defined as switching two elements at distinct locations in the array.) Your task is to determine if this can be done.
//
//If he can't sort the array with one swap, print .
//If the array is already sorted, print .
//If he can sort the array with one swap, print .
//Complete the function swapToSort which takes in an integer array  and returns either, or .
//
//Input Format
//
//The first line contains a single integer.The second line contains  space - separated integers, the elements of the array .
//
//Constraints
//
//Output Format
//
//Print a single line containing an integer denoting the answer.This should be either, , or .
//
//Sample Input 0
//
//5
//1 10 3 4 3
//Sample Output 0
//
//1
//Explanation 0
//
//Since the array can be sorted in a simgle swap, the output is .
//
//Sample Input 1
//
//5
//1 2 2 4 5
//Sample Output 1
//
//0
//Explanation 1
//
//The array is already sorted, hence the right output is .
//
//Sample Input 2
//
//7
//6 2 4 3 5 1 7
//Sample Output 2
//
//- 1
//Explanation 2
//
//Since the array cannot be sorted in a single swap, the right output is .



#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the swapToSort function below.
int swapToSort(vector<int> a) {
    // Return -1 or 0 or 1 as described in the problem statement.

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = swapToSort(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
