git pull
if [ $? -ne 0 ]; then
echo "error in git pull"
exit 1
fi

git add .
if [ $? -ne 0 ]; then
echo "error in add"
exit 1
fi

git commit -m "update"
if [ $? -ne 0 ]; then
echo "error in commit"
exit 1
fi

git push
if [ $? -ne 0 ]; then
echo "error in git push"
exit 1
fi



