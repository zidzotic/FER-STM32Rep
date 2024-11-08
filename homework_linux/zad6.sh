
find /home/"$1" -type f -size +"$2"M > file_list.txt


cat file_list.txt
tar -czf backup.tgz -T file_list.txt

rm file_list.txt
