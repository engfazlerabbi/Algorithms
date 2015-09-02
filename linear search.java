import java.util.Scanner;
 
public class LinearSearch{
    public static int linearSearch(int a[], int key){
        for(int i=0;i<a.length;i++)
            if(a[i] == key)
                return i+1;
        return 0;
        }
 
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.println("Linear Search");
        System.out.print("Enter the number of element in array: ");
        int n = input.nextInt();
        int arr[] = new int[n];
        System.out.print("Enter " + n + " numbers: ");
        for(int i=0;i<n;i++)
            arr[i] = input.nextInt();
        System.out.print("Enter the searching key: ");
        int key = input.nextInt();
        if(linearSearch(arr, key) != 0)
            System.out.println("Key found at " + linearSearch(arr, key) + " position.");
        else
            System.out.println("Key not found.");
        }
    }
