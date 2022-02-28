*/
problem statement :   Calculate the amount of water stored between buidins during rain.
......INPUT............
N : no of buildings
arr[n]: height of each building..
......OUTPUT...........
amount of water stores in units.
*/
import java.util.*;
import java.lang.*;
import java.io.*;
class WaterStoredAtRain
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan= new Scanner(System.in);
		int n=scan.nextInt();
		int height[]=new int[n];
		for(int i =0;i<n;i++){
		    height[i]=scan.nextInt();
		}
		int left[]=new int[n];
		int right[]=new int[n];
		Arrays.fill(left,0);
		Arrays.fill(right,0);
		// calculating left maximum height of each building...........
		int maxl=0;
		for(int i =0;i<n;i++){
		    maxl=Math.max(height[i],maxl);
		    left[i]=maxl;
		}
		
		// calculating rightMaximumHeight of each building....
		int maxr=0;
		for(int i =n-1;i>=0;i--){
		    maxr=Math.max(height[i],maxr);
		    right[i]=maxr;
		}
		// final calculation..........
		int total=0;
		for(int i=0;i<n;i++){
		    total+=(Math.min(left[i],right[i])-height[i]);
    //  logic behind ....minimum of leftMaxHeight and righrMaxheight denote the level of water but when we minus building height from it it gives the amount of water stored on the building 
		//  total contains sum of water amounts stored at each building.
    }
		System.out.println(total);		
	}
}
