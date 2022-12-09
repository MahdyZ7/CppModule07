/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:29:51 by ayassin           #+#    #+#             */
/*   Updated: 2022/12/09 19:00:08 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : array(new T[0]), len(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), len(n)
{
}

template <typename T>
Array<T>::Array(Array const &src) : array(new T[src.len]), len(src.len)
{
	for (unsigned int i = 0; i < len; i++)
		array[i] = src.array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		delete [] array;
		array = new T[other.size];
		len = other.len;
		for (unsigned int i = 0; i < len; i++)
			array[i] = other.array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= len)
		throw std::exception("Index out of range");
	return array[i];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return len;
}
