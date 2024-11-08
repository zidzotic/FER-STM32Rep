while true; do
  echo "*** Time: $(date)" >> log_history.log
  who >> log_history.log
  echo "\n" >> log_history.log
  sleep "$1"m
done
