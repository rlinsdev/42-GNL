/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 07:08:56 by rlins             #+#    #+#             */
/*   Updated: 2022/05/20 12:50:12 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Write a function that returns a line read from a
 * file descriptor / Will read all file, until break line.
 * @param fd: The file descriptor to read from / File descriptor is integer
 *  that uniquely identifies an open file of the process
 * @return Read line: correct behavior (with a break line)
 * NULL: there is nothing else to read, or an error occurred
 */
char	*get_next_line(int fd);

/**
* @brief Searches for the first occurrence of the character c 
* (an unsigned char) in the string pointed to by the argument str.
* @param s - This is the C string to be scanned.
* @param c This is the character to be searched in str
* @return This returns a pointer to the first occurrence of the 
* character c in the string str, or NULL if the character is not found
*/
char	*ft_strchr(const char *s, int c);

/**
* @brief Calculates the length of a given string.
* @param str as an argument
* @return returns its length
*/
size_t	ft_strlen(const char *str);

/**
* @brief Allocates (with malloc(3)) and returns a new string, 
* which is the result of the concatenation of ’s1’ and ’s2’.
* @param s1: The prefix string.
* @param s2: The suffix string.
* @return The new string. NULL if the allocation fails.
*/
char	*ft_strjoin(char *s1, char *s2);

/**
 * @brief Will retrieve the begin of new sentence. This was the 'dirty' the 
 * previews sentence.What was discarted in previews sentence, is necessary 
 * to the next, and this function will
 * get just this part of text.
 * @param acc - The Accummulator (previews static variable)
 * @return char* - Part of sentence, that will be used, in the next iteration
 */
char	*get_newtext(char	*acc);

/**
 * @brief Responsable to identify the new line, add a new (if found)
 * and return the current line. It will clean the first line until the 
 * break line.
 * @param text to analyze and 'substring' until de break line.
 * @return the line changed / corrected
 */
char	*fix_line(char	*text);

#endif