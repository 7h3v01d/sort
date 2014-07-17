/** Compare two arguments.
 * This must return an integer less than, equal to, or greater than zero if
 * the first argument is considered to be respectively less than, equal to,
 * or greater than the second.
 * If two members compare as equal, their order in the sorted array is
 * undefined.
 *
 * @param p1 First argument.
 * @param p2 Second argument.
 *
 * @return Integer depending on the order of arguments.
 */
typedef int (bubble_cmp_proc_t)( const void *p1, const void *p2 );


/** Sort array with \a nmemb elements of size \a size.
 * The contents of the array are sorted in ascending order according to a
 * comparison function.
 * Time complexity: n^2
 * In-place: no
 *
 * @param base Start of the array.
 * @param nmemb Number of elements in the array.
 * @param size Size of the element.
 * @param compar Comparison function.
 */
void bubblesort( void *base, unsigned int nmemb, unsigned int size, const bubble_cmp_proc_t *compar )
{
	char *p = (char *)base;
	char *e = p+(nmemb*size);


	while( p < e ) {
		char *q = p + size;
		while( q < e ) {
			if( 0 > (*compar)(p, q) ) {
				unsigned int s = size;
				char *a = p;
				char *b = q;
				do {
					char t = *a;
					*(a++) = *b;
					*(b++) = t;
				} while( 0 < --s );
			}
			q += size;
		}
		p += size;
	}
}
