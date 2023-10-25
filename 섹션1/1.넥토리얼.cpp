#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'autocompletes' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY inputs as parameter.
 */

vector<int> autocompletes(vector<string> inputs) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string inputs_count_temp;
    getline(cin, inputs_count_temp);

    int inputs_count = stoi(ltrim(rtrim(inputs_count_temp)));

    vector<string> inputs(inputs_count);

    for (int i = 0; i < inputs_count; i++) {
        string inputs_item;
        getline(cin, inputs_item);

        inputs[i] = inputs_item;
    }

    vector<int> result = autocompletes(inputs);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

