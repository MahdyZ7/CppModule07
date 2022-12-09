/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:25:03 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/10 00:22:32 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
// # include "Array.tpp"

// template <typename T>
// class Array<T>;
template <typename T>
class Array
{
	public:
		Array(void);
		Array(int n);
		Array(Array const &src);
		~Array(void);
		Array &operator=(Array const &other);
		T &operator[](unsigned int i) const;
		unsigned int size(void) const;	
	private:
		T *arr;
		unsigned int len;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, Array<T> const &other);

#endif