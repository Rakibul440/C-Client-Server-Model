### File Structure
```
Projects/
|
|___headers/
|   |__search.h
|
|___src/
|   |__search.cpp
|   |__main.cpp
|
|___output/
```

### Execution of File

* <i>Current folder is 'output/'</i>

1. **Compiling**     
```powershell
g++ -c -I../headers -c ../src/search.cpp 
g++ -c -I../headers -c ../src/main.cpp 

``` 

2. **Linking**

```powershell
g++ search.o main.o -o <output>
```
* **-I**<i> Looks inside 'headers/' folder for header files</i>


3. **Execution**
```sql
./output.out -- in Linux
./output.exe -- in windows
```


---

### VS Code Path Error Solve

1. **Make a `.vscode/` folder**

```powershell
mkdir .vscode
```

2. **Make a file `.vscode/c_cpp_properties.json`**
``` powershell
cd .vscode 
touch c_cpp_properties.json
```
3. **Configure the file**

```json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
                "${workspaceFolder}/headers"
            ],
            "compilerPath": "/usr/bin/g++"
        }
    ],
    "version": 4
}
```