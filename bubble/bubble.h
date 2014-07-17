#ifndef __BUBBLESORT_H__
#define __BUBBLESORT_H__


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


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
void bubblesort( void *base, unsigned int nmemb, unsigned int size, const bubble_cmp_proc_t *compar );


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* __BUBBLESORT_H__ */
