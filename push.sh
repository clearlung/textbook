date=$(date +"%m/%d %H:%M") 
dir="/home/clear/textbook"

git add $dir
git commit -m "$date" 
git push -u origin main
