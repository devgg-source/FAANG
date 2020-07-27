/*
Merge two sorted arrays without extra space
Input: ar1[] = {10};
       ar2[] = {2, 3};
Output: ar1[] = {2}
        ar2[] = {3, 10}  
*/



void merge(int arr1[], int arr2[], int n, int m) 
{ 
    //Your code here
    //n is size of arr1
    //m is size of arr2
    int x=n-1, y = 0;
 while(x>=0 && y<m){ if(arr1[x]> arr2[y]){
swap(arr1[x] , arr2[y]);
x--;
y++;
}
else{
x--;
}
}
sort(arr1 , arr1+n);
sort(arr2 , arr2+m);
    
} 
