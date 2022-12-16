public class Lab8 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println(binomialCoefficient(4, 2)); //Using brute force
		System.out.println(bc(4, 2));	//Using memoization
		System.out.println(BC(4, 2));	//Using tabulation

	}
	public static int BC(int n, int k) {
		int [] array = new int [k+1];
		array [0] = 1;
		for (int i=0;i<=n;i++) {
			for (int j=Math.min(i, k);j>0;j--) {
				array [j] += array[j-1];
			}
		}
		return array [k];
	}

	public static int binomialCoefficient(int n, int k) {
		if (k > n) return 0;
		if (k == 0 || k == n) return 1;
		return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
		
	}
	
	public static int bc(int n, int k) {
		
		int [][] array = new int [n+1][k+1];
		for (int i=0;i<=n;i++) {
			for (int j=0;j<=Math.min(i, k);j++) {
				if (j == 0 || j == i) array [i][j] = 1;
				else array [i][j] = array [i-1][j-1] + array [i-1][j];
			}
		}
		return array [n][k];
	}
}
