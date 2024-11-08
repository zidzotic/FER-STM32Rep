find /home/"$1" -mmin -"$2" > file_list.txt

cat file_list.txt

tar -czf backup.tgz -T file_list.txt

rm file_list.txt
