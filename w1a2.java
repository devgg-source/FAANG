/*

Iahub got bored, so he invented a game to be played on paper.

He writes n integers a 1, a 2, ..., a n. Each of those integers can be either 0 or 1. He's allowed to do exactly one move: he chooses two indices i and j (1 ≤ i ≤ j ≤ n) and flips all values a k for which their positions are in range [i, j] (that is i ≤ k ≤ j). Flip the value of x means to apply operation x = 1 - x.

The goal of the game is that after exactly one move to obtain the maximum number of ones. Write a program to solve the little game of Iahub.

Input
The first line of the input contains an integer n (1 ≤ n ≤ 100). In the second line of the input there are n integers: a 1, a 2, ..., a n. It is guaranteed that each of those n values is either 0 or 1.

Output
Print an integer — the maximal number of 1s that can be obtained after exactly one move.

Examples
input
5
1 0 0 1 0
output
4
input
4
1 0 0 1
output
4
Note
In the first case, flip the segment from 2 to 5 (i = 2, j = 5). That flip changes the sequence, it becomes: [1 1 1 0 1]. So, it contains four ones. There is no way to make the whole sequence equal to [1 1 1 1 1].

In the second case, flipping only the second and the third element (i = 2, j = 3) will turn all numbers into 1.
*/

        import java.util.*;
         
        public class FlippingGame{
            public static void main(String[] args){
                Scanner scan = new Scanner(System.in);
                int n= scan.nextInt();
                int arr[]= new int[n];
                int sum=0;
                for(int i=0;i<n;i++){
                    arr[i]= scan.nextInt();
                    sum+=arr[i];
                } 
                if(sum==n) System.out.println(sum-1);
                else{
                    int zeroCount=0;
                    int local=0;
                    for(int i=0;i<n;i++){
                        if(arr[i]==0) local++;
                        else local--;
                        if(local<0) local=0;
                        zeroCount= Math.max(zeroCount,local);
                    }
                    System.out.println(zeroCount+sum);
                }
                
            }
        }

