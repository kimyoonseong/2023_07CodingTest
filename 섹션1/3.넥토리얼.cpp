#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/*
 * Complete the 'getMergedLineSegments' function below.
 *
 * The function is expected to return a 2D_INTEGER_ARRAY.
 * The function accepts 2D_INTEGER_ARRAY lineSegments as parameter.
 */

vector<vector<int>> getMergedLineSegments(vector<vector<int>> lineSegments) {
    //int a= *min_element(lineSegments[0].begin(),lineSegments[0].end());
    vector<vector<int>> res;
    sort(lineSegments.begin(), lineSegments.end());
    
    for(auto a : lineSegments){
        cout<<a[0]<<' '<<a[1]<<'\n';
    }
    // for(int i=0; i<lineSegments.size()-1;i++){
    //     if(lineSegments[i][1]>=lineSegments[i+1][0]){
    //         for(int j=i; j<lineSegments.size()-1; j++){
    //             if(lineSegments[i][1]>=lineSegments[j+1][0]){
    //                 if(lineSegments[j+1][1]>lineSegments[i][1]){
    //                     res.push_back({lineSegments[i][0],lineSegments[j+1][1]});
    //                     break;
    //                 }
    //                 else if(lineSegments[j+1][1]<lineSegments[i][1]){
    //                     continue;
    //                 }
    //             }
    //         }
    //         if(lineSegments[i+1][1]>lineSegments[i][1]){
    //              res.push_back({lineSegments[i][0],lineSegments[i+1][1]});
    //         }
    //         else if(lineSegments[i+1][1]<lineSegments[i][1]){
    //              res.push_back({lineSegments[i][0],lineSegments[i][1]});
    //         }
    //         continue;
    //     }
    //     else if(lineSegments[i][1]>=lineSegments[i+1][0]){
    //         res.push_back({lineSegments[i][0],lineSegments[i][1]});
    //     } 
    // }
    for(int i=1; i<lineSegments.size();i++){
       if(lineSegments[i][0]<=lineSegments[i-1][1]){
           if(lineSegments[i][1]>lineSegments[i-1][1]){
               res.push_back({lineSegments[i-1][0],lineSegments[i][1]});
           }
           else if (lineSegments[i][1]<=lineSegments[i-1][1]){
               res.push_back({lineSegments[i-1][0],lineSegments[i-1][1]});
           }
           continue;
       }
      
       else if(lineSegments[i][0]>lineSegments[i-1][1]||lineSegments[i][1]<lineSegments[i+1][0]){
           res.push_back({lineSegments[i][0],lineSegments[i][1]});
       }
    }
    return res;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string lineSegments_rows_temp;
    getline(cin, lineSegments_rows_temp);

    int lineSegments_rows = stoi(ltrim(rtrim(lineSegments_rows_temp)));

    string lineSegments_columns_temp;
    getline(cin, lineSegments_columns_temp);

    int lineSegments_columns = stoi(ltrim(rtrim(lineSegments_columns_temp)));

    vector<vector<int>> lineSegments(lineSegments_rows);

    for (int i = 0; i < lineSegments_rows; i++) {
        lineSegments[i].resize(lineSegments_columns);

        string lineSegments_row_temp_temp;
        getline(cin, lineSegments_row_temp_temp);

        vector<string> lineSegments_row_temp = split(rtrim(lineSegments_row_temp_temp));

        for (int j = 0; j < lineSegments_columns; j++) {
            int lineSegments_row_item = stoi(lineSegments_row_temp[j]);

            lineSegments[i][j] = lineSegments_row_item;
        }
    }

    vector<vector<int>> result = getMergedLineSegments(lineSegments);

    for (size_t i = 0; i < result.size(); i++) {
        for (size_t j = 0; j < result[i].size(); j++) {
            fout << result[i][j];

            if (j != result[i].size() - 1) {
                fout << " ";
            }
        }

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

