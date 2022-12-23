#include <stdio.h>
/**
 * reverse_array - reverses the contents of an array
 * @a: receives the array
 * @n: receives the element of the array a
 */
void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	 */
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
