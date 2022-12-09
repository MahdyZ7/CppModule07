/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:04:20 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/09 17:05:09 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void swap(T &s1, T &s2)
{
	T temp = s1;
	s1 = s2;
	s2 = temp;
}

template <typename T>
T min(T const &s1, T const &s2)
{
	if (s1 < s2)
		return s1;
	return s2;
}

template <typename T>
T max(T const &s1, T const &s2)
{
	if (s1 > s2)
		return s1;
	return s2;
}
#endif