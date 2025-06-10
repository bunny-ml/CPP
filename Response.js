function binaryToString(binary) {
    return binary.split(' ')
                 .map(bin => String.fromCharCode(parseInt(bin, 2)))
                 .join('');
  }
  
  // Example usage:
  const binary = ""; //paste the binary here 
  const text = binaryToString(binary);
  console.log(`I want to say that `, text);
  