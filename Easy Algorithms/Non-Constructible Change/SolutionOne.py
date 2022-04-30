def nonConstructibleChange(coins):
	minAmntChange = 0
	
	# Sort the list
	coins.sort()
	
	# Loop through the coins
	for coin in coins:
		if coin > minAmntChange + 1:
			return minAmntChange + 1
		# Increase minimum amount of change by coin value
		minAmntChange += coin

	return minAmntChange + 1