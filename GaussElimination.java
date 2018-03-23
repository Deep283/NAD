import java.util.Scanner;
public class GaussElimination
{
  public static int[][] input()
  {
    System.out.println("Enter n:");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[][] a = new int[n][n+1];
    System.out.println("Enter Array:");
    for(int i=0;i<n;i++)
      for(int j=0;j<n+1;j++)
         a[i][j] = sc.nextInt();
    return a;
  }
  public static void display(int[][] a)
  {
     for(int i=0;i<a.length;i++)
     {
       for(int j=0;j<a[i].length;j++)
           System.out.print(" "+a[i][j]);
       System.out.println("");
     }
  }
  public static void main(String[] args)
  {
     int[][] a = input();
     int k,sum;
     display(a);
     int n = a.length;
     int[] x = new int[n];
     for(int i = 0;i<= n-2;i++)
       for(int j = i+1;j<=n-1;j++)
     {
       k = a[j][i] / a[i][i];
       for(int z = i;z<=n;z++)
         a[j][z] = a[j][z] - ( k * a[i][z] );
       display(a);
     }
     x[n-1] = a[n-1][n]/a[n-1][n-1];
     for(int i=n-2;i>=0;i--)
     {
       sum = 0;
       for(int j=i+1;j<=n-1;j++)
          sum = sum + a[i][j] * x[j];
       x[i] = (a[i][n] - sum) / a[i][i]; 
     }
     for(int j=0;j<n;j++)
           System.out.println(x[j]);
  }
}