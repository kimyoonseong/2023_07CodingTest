#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'three_numbers' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER t
 *  2. INTEGER_ARRAY d
 */
 long cnt=0;


void combi( vector<int> b, vector<int> d,int t){
    long sum;
    
    if(b.size() == 3){
        
        if(b[0]+b[1]>t||b[1]+b[2]>t||b[0]+b[2]>t||b[0]+b[1]+b[2]>t){
               return;
        }
        if(b[0]<b[1]&&b[0]<b[2]&&b[1]<b[2]){
           
            sum=b[0]+b[1]+b[2];
            cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<"\n";
            if(sum<=t){
                cnt++;
            }
        }
        
        return;
    }
        
    
    for(auto i: d){
        b.push_back(i);
        combi(b,d,t);
        b.pop_back();
    }    
   
    return;
}
long three_numbers(int t, vector<int> d) {
    
    sort(d.begin(),d.end());
    vector<int> b;
    combi(b,d,t);
    
    // for(int i=0; i<d.size();i++){
    //     for(int j=i+1; j<d.size(); j++){
    //         for(int k=j+1; k<d.size();k++){
    //             if(i<j&&i<k&&j<k){
    //                 long sum=0;
    //                 sum=d[i]+d[j]+d[k];
    //                 //cout<<d[i]<<" "<<d[j]<<" "<<d[k]<<"\n";
    //                 cout<<sum<<"\n";
    //                 if(sum<=t){
    //                     cnt++;
    //                 }
    //             }
    //             else continue;
    //         }
    //     }
    // }
   
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    string d_count_temp;
    getline(cin, d_count_temp);

    int d_count = stoi(ltrim(rtrim(d_count_temp)));

    vector<int> d(d_count);

    for (int i = 0; i < d_count; i++) {
        string d_item_temp;
        getline(cin, d_item_temp);

        int d_item = stoi(ltrim(rtrim(d_item_temp)));

        d[i] = d_item;
    }

    long result = three_numbers(t, d);

    fout << result << "\n";

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

