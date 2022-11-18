/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:04:07 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/18 19:13:48 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen(__FILE__, "r");
    if (fp == NULL)
    {
        printf("Error while opening the file.\n");
        return (0);
    }
    else
    {
        while ((ch = fgetc(fp)) != EOF)
            printf("%c", ch);
        fclose(fp);
    }
    return (0);
}