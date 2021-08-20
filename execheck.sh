#!/bin/bash

#for file in "$HOME/Documents/C++"; do
#	if [[ "$file" == *.exe ]]
#	then
#		sudo mv $file $HOME/Documents/C++/executables
#	else
#		echo "no files to clean"
#	fi
#done;

#checks if certain file exists
#count_file=`ls -1 *flac 2>/dev/null | wc -l`
#if [ $count_file != 0 ]
#then
#	for file in *.exe; do
#	echo ${file##*/}
#	done
#fi



if compgen -G "$HOME/Documents/C++/*.exe" > /dev/null; then
	echo "found! proceeding to clean"
	sudo mv *.exe $HOME/Documents/C++/executables
else
	echo "not found"
fi
