import React from 'react'

// the P in Avatar in Navbar.jsx is passed as children here 
const Avatar = ({ children, backgroundColor, px, py, color, borderRadius, fontSize, cursor }) => {

    // style is an object here with various attributes
    const style={
        backgroundColor,
        padding: `${py} ${px}`,
        color: color || 'black',
        borderRadius,
        fontSize,
        textAlign:"center",
        cursor: cursor || null,
        textDecoration :"none"
    }

  return (
    <div style={style}>
      { children }
    </div>
  )
}

export default Avatar