{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyMebJqXhsst8E9w3U98hqFb",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/Aravind-Menon07/code/blob/main/Untitled0.c\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "FFBV-WYJsOUa"
      },
      "outputs": [],
      "source": [
        "#include <stdio.h>\n",
        "\n",
        "// Function to check if a year is a leap year\n",
        "int isLeapYear(int year) {\n",
        "    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);\n",
        "}\n",
        "\n",
        "// Function to calculate the day of the week for the 1st day of a given month and year\n",
        "int calculateStartDay(int year, int month) {\n",
        "    int day = 1; // First day of the month\n",
        "    int totalDays = 0;\n",
        "\n",
        "    // Adding days for all years before the given year\n",
        "    for (int i = 1900; i < year; i++) {\n",
        "        totalDays += isLeapYear(i) ? 366 : 365;\n",
        "    }\n",
        "\n",
        "    // Adding days for months of the current year\n",
        "    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};\n",
        "    if (isLeapYear(year)) {\n",
        "        daysInMonth[1] = 29; // February in a leap year\n",
        "    }\n",
        "\n",
        "    for (int i = 0; i < month - 1; i++) {\n",
        "        totalDays += daysInMonth[i];\n",
        "    }\n",
        "\n",
        "    // Adding the day of the current month (1st day)\n",
        "    totalDays += day - 1;\n",
        "\n",
        "    return totalDays % 7; // Return the day of the week (0=Sunday, 1=Monday, ..., 6=Saturday)\n",
        "}\n",
        "\n",
        "// Function to display the calendar for a given month and year\n",
        "void displayCalendar(int year, int month) {\n",
        "    char *months[] = {\"January\", \"February\", \"March\", \"April\", \"May\", \"June\",\n",
        "                      \"July\", \"August\", \"September\", \"October\", \"November\", \"December\"};\n",
        "    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};\n",
        "    if (isLeapYear(year)) {\n",
        "        daysInMonth[1] = 29; // February in a leap year\n",
        "    }\n",
        "\n",
        "    printf(\"\\n  %s %d\\n\", months[month - 1], year);\n",
        "    printf(\"  Sun  Mon  Tue  Wed  Thu  Fri  Sat\\n\");\n",
        "\n",
        "    int startDay = calculateStartDay(year, month);\n",
        "\n",
        "    // Print initial spaces for the first week\n",
        "    for (int i = 0; i < startDay; i++) {\n",
        "        printf(\"     \");\n",
        "    }\n",
        "\n",
        "    // Print days of the month\n",
        "    for (int day = 1; day <= daysInMonth[month - 1]; day++) {\n",
        "        printf(\"%5d\", day);\n",
        "        if ((startDay + day) % 7 == 0) { // Move to the next line after Saturday\n",
        "            printf(\"\\n\");\n",
        "        }\n",
        "    }\n",
        "    printf(\"\\n\");\n",
        "}\n",
        "\n",
        "// Main function\n",
        "int main() {\n",
        "    int year, month;\n",
        "\n",
        "    printf(\"Enter year: \");\n",
        "    scanf(\"%d\", &year);\n",
        "    printf(\"Enter month (1-12): \");\n",
        "    scanf(\"%d\", &month);\n",
        "\n",
        "    if (month < 1 || month > 12) {\n",
        "        printf(\"Invalid month! Please enter a value between 1 and 12.\\n\");\n",
        "        return 1;\n",
        "    }\n",
        "\n",
        "    displayCalendar(year, month);\n",
        "\n",
        "    return 0;\n",
        "}\n"
      ]
    }
  ]
}