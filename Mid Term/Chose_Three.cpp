 #include <iostream>
 #include <vector>
 using namespace std;

 int main()
 {
	 ios::sync_with_stdio(false);
	 cin.tie(nullptr);

	 int test_cases;
	 cin >> test_cases;

	 while (test_cases--)
	 {
		 int n, target;
		 cin >> n >> target;

		 vector<int> numbers(n);
		 for (int& number : numbers)
		 {
			 cin >> number;
		 }

		 bool possible = false;
		 for (int first = 0; first < n && !possible; ++first)
		 {
			 for (int second = first + 1; second < n && !possible; ++second)
			 {
				 for (int third = second + 1; third < n; ++third)
				 {
					 if (numbers[first] + numbers[second] + numbers[third] == target)
					 {
						 possible = true;
						 break;
					 }
				 }
			 }
		 }

		 cout << (possible ? "YES" : "NO") << '\n';
	 }

	 return 0;
 }
