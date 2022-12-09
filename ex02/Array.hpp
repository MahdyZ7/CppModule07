/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:25:03 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/09 19:07:31 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include "Array.tpp"

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		~Array(void);
		Array &operator=(Array const &rhs);
		T &operator[](unsigned int i);
		unsigned int size(void) const;	
	private:
		T *array;
		unsigned int len;
};

#endif