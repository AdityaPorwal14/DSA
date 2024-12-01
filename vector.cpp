#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int value : nums) {
        ans ^= value;
    }
    return ans;
}

int main(){
    /*vector <int> vec = {1,2,3,4,5,6};

    cout<<"size = " << vec.size() << endl;
    vec.push_back(25); //because of this line capacity is increase 
    cout<<"after push back size " << vec.size() << endl;

    vec.pop_back();

    cout<< vec.front();
    cout<< vec.back();
    cout<< vec.at(1) << endl;
    cout<< vec.capacity() << endl; //6

    for(int val : vec){
        cout<<val;
    }*/

    /*vector<int> nums = {4, 1, 2, 1, 2}; // Example input
    int result = singleNumber(nums);
    cout << "The single number is: " << result << endl;
    return 0;*/

    //2d vector 
    /*int n,m;
    cout<<"enter row and column"<<endl;
    cin>>n>>m;

    vector<vector<int> > matrix(n,vector<int>(m,1));
    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    cin>>matrix[i][j];

    cout<<"rows"<<matrix.size()<<endl;
    cout<<"cols"<<matrix[0].size()<<endl;

    for(int i=0; i<n; i++){
     for(int j=0; j<m; j++)
     cout<<matrix[i][j]<<" ";
     cout<<endl;
    }
}*/

// vector<int> v;
/*vector<int> v = {2,3,4,5,6};
vector<int> v1(4,2);

for(int i = 0; i<5; i++){
    cout<<v[i]<<" ";
}*/

/*int n;
cout<<"enter the number of n"<<endl;
cin>>n;
vector<int> arr(n);*/

//intililizing 
/*for(int i = 0; i<n; i++){
    cout << "Enter value for element " << i + 1 << ": ";
    cin>>arr[i];
}

//print 
for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
    }
}*/

vector<int> vnew;
// cout<<"before push back the size is: "<<vnew.size()<<endl;
vnew.push_back(25);
vnew.push_back(35);
vnew.push_back(45);
vnew.push_back(55);
vnew.push_back(65);

// for(int i = 0; i<vnew.size(); i++){
//     cout<<vnew[i]<<" ";

// }

// cout<<endl;

// for(auto it = vnew.rbegin(); it!=vnew.rend(); it++){
//     cout<<*it<<" ";
// }
// cout<<endl;

// sort(vnew.begin(), vnew.end());

cout<<binary_search(vnew.begin(), vnew.end(), 25);

// cout<<"after push back the size is: "<<vnew.size()<<endl;
// cout<<"after push back the capacity is: "<<vnew.capacity()<<endl;

//vnew.pop_back();
// vnew.clear();
// vnew.erase(vnew.begin()+ 2);

// cout<<vnew.front();
// cout<<vnew.back();

// cout<<"after push back the size is: "<<vnew.size()<<endl;
// cout<<"after push back the capacity is: "<<vnew.capacity();
}