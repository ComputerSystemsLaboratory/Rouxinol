#!/usr/bin/env bash

# Usage:
# ./script.sh /path/to/search target_directory_name

search_path="$1"
folder_name="$2"

if [ -z "$search_path" ] || [ -z "$folder_name" ]; then
  echo "Usage: $0 /path/to/search directory_name"
  exit 1
fi

echo "Searching for directories named \"$folder_name\" in \"$search_path\"..."

total=0
while IFS= read -r dir; do
  # Count all regular files inside this directory (recursively)
  file_count=$(find "$dir" -type f | wc -l)
  echo "Directory: $dir => $file_count files"
  total=$((total + file_count))
done < <(find "$search_path" -type d -name "$folder_name")

echo "-----------------------------------------"
echo "Total files across all matching directories: $total"
