import React from 'react';

const WarningIcon: React.FC<React.SVGProps<SVGSVGElement>> = (props) => (
  <svg 
    xmlns="http://www.w3.org/2000/svg" 
    width="22" // Set width
    height="22" // Set height
    viewBox="0 0 448 512" 
    fill="currentColor" // Use currentColor to adapt to text color
    stroke="currentColor" // Optional: Set stroke to currentColor if needed
    strokeWidth="2" // Optional: Set strokeWidth if adding stroke
    strokeLinecap="round" // Optional: Set strokeLinecap if adding stroke
    strokeLinejoin="round" // Optional: Set strokeLinejoin if adding stroke
    {...props} // Pass other props if needed
  >
    <path d="M304 128a80 80 0 1 0 -160 0 80 80 0 1 0 160 0zM96 128a128 128 0 1 1 256 0A128 128 0 1 1 96 128zM49.3 464l349.5 0c-8.9-63.3-63.3-112-129-112l-91.4 0c-65.7 0-120.1 48.7-129 112zM0 482.3C0 383.8 79.8 304 178.3 304l91.4 0C368.2 304 448 383.8 448 482.3c0 16.4-13.3 29.7-29.7 29.7L29.7 512C13.3 512 0 498.7 0 482.3z"/>
  </svg>
);

export default WarningIcon;
