{"metadata":{"kernelspec":{"language":"python","display_name":"Python 3","name":"python3"},"language_info":{"pygments_lexer":"ipython3","nbconvert_exporter":"python","version":"3.6.4","file_extension":".py","codemirror_mode":{"name":"ipython","version":3},"name":"python","mimetype":"text/x-python"},"kaggle":{"accelerator":"none","dataSources":[],"isInternetEnabled":false,"language":"python","sourceType":"notebook","isGpuEnabled":false}},"nbformat_minor":4,"nbformat":4,"cells":[{"cell_type":"code","source":"# Function to calculate factorial using recursion\ndef factorial(n):\n    if n == 0 or n == 1:\n        return 1  # Base case: factorial of 0 or 1 is 1\n    return n * factorial(n - 1)  # Recursive case\n\n# Main program\nnum = int(input(\"Enter a number to calculate its factorial: \"))\n\nif num < 0:\n    print(\"Factorial of a negative number is undefined.\")\nelse:\n    print(f\"Factorial of {num} is {factorial(num)}\")\n","metadata":{"_uuid":"8f2839f25d086af736a60e9eeb907d3b93b6e0e5","_cell_guid":"b1076dfc-b9ad-4769-8c92-a6c4dae69d19","trusted":true},"outputs":[],"execution_count":null}]}