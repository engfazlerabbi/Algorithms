//Binary Search
 
import java.util.Scanner;
 
public class BinarySearch{
    public static int binarySearch(int a[], int key){
        int beg = 0, end = a.length-1;
        int mid = (beg+end)/2;
        while(beg<=end){
            if(key<a[mid])
                end = mid-1;
            else
                beg = mid+1;
            if(a[mid]==key)
                break;
            mid = (beg+end)/2;
            }
        if(a[mid]==key)
            return mid+1;
        return 0;
        }
 
    public static void bubbleSort(int a[]){
        for(int i=0; i<a.length-1; i++){
            for(int j=i+1; j<a.length; j++){
                if(a[i]>a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    }
                }
            }
        }
 
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.println("Binary Search");
        System.out.print("Enter the number of element in array: ");
        int n = input.nextInt();
        int arr[] = new int[n];
        System.out.print("Enter " + n + " numbers: ");
        for(int i=0;i<n;i++)
            arr[i] = input.nextInt();
        bubbleSort(arr);
        System.out.print("Array after sorting: ");
        for(int i: arr)
            System.out.print(i + " ");
        System.out.println();
        System.out.print("Enter the searching key: ");
        int key = input.nextInt();
        if(binarySearch(arr, key)!=0)
            System.out.println("Key found at "+ binarySearch(arr, key) + " potision.");
        else
            System.out.println("Key not found.");
        }
    }