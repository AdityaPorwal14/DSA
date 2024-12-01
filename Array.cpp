#include <iostream>
using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,999};
//     int findsize = sizeof(arr) / sizeof(int);
    /*cout << findsize << endl;
    for(int i=0; i<findsize; i++){
        cout << arr[i] << " ";
    }

    cout<<endl;

    int sum = 0;
    for(int i=0; i<findsize; i++){
        sum = sum + arr[i];
    }
    cout << sum << endl;*/
    
    /*int x;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    bool found = false;
    for(int i=0; i<findsize; i++){
        if(arr[i]==x){
            cout<<x<<" is find in the arrary"<<endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"not present in the array"<<endl;
    }
}*/

/*int mx = arr[0];
for(int i=1;i<=findsize; i++){
    if(mx<arr[i]) mx = arr[i];
}
cout<<mx<<endl;
}*/

// int main(){
//     int array[5] = {5,6,6,7,8};
//     cout<<array[0];

//     // cout << sizeof(array[0])/sizeof(int)<<endl;
// }

/*void printArray(int arr[], int size){
    cout<<"printing the array"<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i] <<" ";
    }
    cout<<"printing done"<<endl;
}
int main(){
    int number[15];
    cout<<"value of 14 index "<<number[14]<<endl;

    int second[3] = {5,7,11};
    cout<<"value at 2 index "<<second[2]<<endl;

    int third[15] = {2,7};

    int n = 15;
    printArray(third,15);
    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"size of third is "<<thirdsize<<endl;

    int fourth[10] = {0};
    n = 10;
    printArray(fourth,10);

    int fifth[10] = {1};

    n = 10;
    printArray(fifth, 10);

    int fifthsize = sizeof(fifth)/ sizeof(int);
    cout<<"size of fifth is "<<fifthsize<<endl;
}*/

//Largest element in the array
/*int main(){
    int arr[5] = {2,5,10,80,90};
    int largest = arr[0];
    int n = 5;
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout<<largest<<endl;

    int secondlargest[] = {1,2,4,7,7,5};
    largest = secondlargest[0];
    int m = 6;
    for(int i=1; i<n; i++){
        if(secondlargest[i] > largest){
            largest = secondlargest[i];  
    }
}

cout<<largest<<endl;

}*/

/*int main(){
    int nums[] = {5,15,22,1,-15,24};
    int size = 6;
    int smallest = INT8_MIN;
    for(int i=0; i<size; i++){
        if(nums[i]>smallest){
            smallest = nums[i];
        }
    }
    cout<<"smallest = "<<smallest<<endl;
}*/

/*int leanerseach(int arr[], int target, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            cout<<"index is "<<i<<endl;
            return i;
        }
    }
    return -1;
}*/

/*void reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    } 
}*/

/*void sumofarray(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum +=arr[i];
    }
    cout << "sum of the total array is " << sum << endl;
}*/

// int main(){
    /*int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    int size = 7;
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            cout<<i<<endl;
        }
    }
    return -1;
}*/

/*int arr[] = {4,2,7,8,1,2,5};
    int target = 5;
    int size = 7;

    cout<<leanerseach(arr,target,size)<<endl;

    reverseArray(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}*/

/*int main(){
    int arr[] = {1,2,3,4,10};
    sumofarray(arr,5);

 }*/ 

/*int main(){
    int arr[] = {1,2,3,4,5};
    int sz = 5;
    int largest = INT8_MIN;
    int smallest = INT8_MAX;
    int largestindex = 0, smallestindex = 0;
    for(int i = 0; i<sz; i++){

        if(arr[i]>largest){
            largest = arr[i];
            largestindex = i;
        }

        if(arr[i]<smallest){
            smallest = arr[i];
            smallestindex = i;
        }
    }

    cout<<largest<<endl;
    cout<<smallest<<endl;

    cout<<largestindex<<endl;
    cout<<smallestindex<<endl;
    
    int temp = arr[largestindex];
    arr[largestindex] = arr[smallestindex];
    arr[smallestindex] = temp;

    cout<<"after swapping the array"<<endl;
    for(int i=0; i<sz; i++){
        cout<< arr[i] << " ";
    }

    cout<<endl;

}*/

// for (int i = 0; i < sz; i++) {       // Outer loop: goes through each element
//     bool isUnique = true;             // Assume the element is unique at first

//     for (int j = 0; j < sz; j++) {    // Inner loop: compares with every other element
//         if (i != j && arr[i] == arr[j]) {   // Check if another element is the same
//             isUnique = false;          // If found, it's not unique
//             break;                     // Stop inner loop, we found a duplicate
//         }
//     }

//     if (isUnique) {
//         cout << arr[i] << " ";         // Print if unique
//     }
// }


/*void printUniqueValues(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        bool isUnique = true;

        // Check if arr[i] is unique
        for (int j = 0; j < sz; j++) {
            if (i != j && arr[i] == arr[j]) { // If arr[i] appears elsewhere
                isUnique = false;
                break;
            }
        }

        // If no duplicate found, print the unique element
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6, 7};
    int sz = sizeof(arr) / sizeof(arr[0]);
    printUniqueValues(arr, sz);
    return 0;
}*/

/*void intersactionarr(int arr[], int size){
    bool isunique = false;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]== arr[j] && i!=j){
                isunique = false;
                break;
            }
        }

        if(isunique){
            cout<<arr[i]<<" ";
        }
    }

    cout<<endl;
}

int main(){
    int arr1[] = {1,2,3,4,5};
}*/

//second largest element in the array
/*int print2largest(int arr[], int sz){
    int ans = -1;
    for(int i=0; i<=sz; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    //second max
    int second = -1;
    for(int i=0; i<sz; i++){
        if(arr[i]!=ans){
            second = max(second, arr[i]);
        }
    }

    return second;

}

int main(){
    int arr[] = {12,350,1,100,34,1};
    int sz = 6;
    cout<<print2largest(arr, sz); 
}*/

//fibonacci seris
/*int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int arr[100];
    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<=n-1; i++){
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i] <<" ";
    }
    cout<<endl;
    cout << arr[n-1] <<" "; 
         
    
}*/

//2d array
/*int main(){
    int chaiSales[3][7] = {
        {50, 60, 55, 70, 65, 80, 75},  // Shop 1 sales for 7 days
        {40, 55, 60, 65, 70, 75, 80},  // Shop 2 sales for 7 days
        {45, 50, 55, 60, 65, 70, 75}   // Shop 3 sales for 7 days
    };

    for(int i = 0; i < 3; i++){
        cout << "I am at shop: " << i+1 << "\n";
        for(int j = 0; j < 7; j++){
            cout << chaiSales[i][j] << " cups - ";
        }
    }

    return 0;
}*/

void printcolumn(int arr[][4],int row,int col){
    for(int j=0; j<col; j++)
    for(int i=0; i<row; i++)
    cout<<arr[i][j]<<" ";
}

void printrow(int arr[][4], int row, int col){
    for(int row=0; row<3;row++)
    for(int col=0; col<4; col++)
    cout<<arr[row][col]<<" ";

}

void add2matrix(int arr1[][4], int arr2[][4], int ans[][4], int row, int col){
    
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            ans[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    for(int row = 0; row<3; row++)
    for(int col = 0; col<4; col++)
    cout<<ans[row][col]<<" ";

}

void revrawmatrix(int matrix[3][4],int row,int col){
    for(int i=0; i<row; i++){
        int start=0;
        int end=col-1;
        int ans;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }

}

void printmatrix(int matrix[3][4],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl;

}

void wavematrix(int arr[][4], int row, int col){
    for(int j=0; j<col; j++){
        if(j%2==0){
            for(int i=0; i<row; i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i=row-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void transposematrix(int arr[][4], int row, int col){
    for(int j=0; j<col; j++){
        for(int i=0; i<row; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {2,3,4,5,8,9,6,7,8,2,45,67};
    int arr3[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int ans[3][4];

    /*printrow(arr1,3,4);

    cout<<endl;    

    printcolumn(arr1,3,4);

    cout<<endl;

    add2matrix(arr1,arr2,ans,3,4);*/


    //search element in the 2d array
    /*int x = 7;
    for(int row = 0; row<3; row++)
    for(int col = 0; col<4; col++){
    if(arr[row][col] == x){
        cout<<"Yes"<<endl;
        return 0;
        }
    }

    cout<<"No"<<endl;*/

   /*revrawmatrix(arr1,3,4);
   printmatrix(arr1,3,4);*/

//    wavematrix(arr2,3,4);
   transposematrix(arr3,4,4);
}