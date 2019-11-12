# AmBinaryEditor

AndroidManifest.xml Binary Editor. 

AmBinaryEditor can add any element on AndroidManifest without decompiling/compiling with `apktool`

## Build instructions (Ubuntu)

- Assuming that you have `gcc` on your machine:
```
$ make compile
```

## Usage
- Basics
```
-p/--parent     - define parent of that tag
-d/--deep       - how many nodes you wanna skip before inserting
-c/--count      - how many nodes you wanna skip after ending insertion
-n/--name       - attribute name (eg.: android:theme - theme, android:name - name)
-t/--type       - type of attribute value (eg.: strings = 3)
-v/--value      - specific value of that attribute
-i/--input      - input AndroidManifest.xml
-o/--output     - output AndroidManifest.xml
```

- Activities
```
$ ./ameditor tag --add activity -p application -d 1 -c 0 -i <manifest_path> -o <manifest_path>

$ ./ameditor attr --add activity -p application -d 1 -n name -t 3 -v com.nunonelas.test.Activity -i <manifest_path> -o <manifest_path>
```

- Permissions
```
$ ./ameditor tag --add uses-permission -p manifest -d 1 -c 0 -i <manifest_path> -o <manifest_path>

$ ./ameditor attr --add uses-permission -p manifest -d 1 -n name -t 3 -v com.nunonelas.test.permission -i <manifest_path> -o <manifest_path>
```

## More info

Original documentation here:
```
http://ele7enxxh.com/AndroidManifest-Binary-Editor.html
```